#include <algorithm>
#include <iostream>
#include <map>
#include <optional>
#include <string>
#include <vector>
#define func auto
using namespace std;

// 定义节点类，表示哈夫曼树中的一个节点
class Node {
 public:
  optional<char> character;  // 使用optional替代原始char
  int frequency;             // 当前节点的字符频率
  Node* left;                // 左子节点
  Node* right;               // 右子节点

  // 构造函数，用于初始化节点，内部节点没有字符
  Node(optional<char> character = nullopt, int frequency = 0,
       Node* left = nullptr, Node* right = nullptr) {
    this->character = character;
    this->frequency = frequency;
    this->left = left;
    this->right = right;
  }
};

// 构建哈夫曼树函数，输入是字符频率表，返回树的根节点
func buildHuffmanTree(map<char, int>& frequencies) -> optional<Node*> {
  // 将每个字符和其频率封装成节点，并将这些节点添加到数组中
  vector<Node*> nodes;
  for (const auto& pair : frequencies) {
    nodes.push_back(new Node(pair.first, pair.second));
  }

  // 当数组中节点数量大于1时，继续合并
  while (nodes.size() > 1) {
    // 按频率从小到大排序节点，便于选出两个最小频率的节点
    sort(nodes.begin(), nodes.end(),
         [](Node* a, Node* b) { return a->frequency < b->frequency; });

    // 取出频率最小的两个节点
    Node* left = nodes[0];
    Node* right = nodes[1];
    nodes.erase(nodes.begin(), nodes.begin() + 2);

    // 创建一个新的父节点，其频率是两个子节点的频率之和
    Node* parent =
        new Node(nullopt, left->frequency + right->frequency, left, right);

    // 将新节点添加到节点列表中
    nodes.push_back(parent);
  }

  // 返回最后一个节点，即哈夫曼树的根节点
  return nodes.empty() ? nullopt : optional<Node*>(nodes[0]);
}

// 生成哈夫曼编码的递归函数，node是当前节点，prefix是当前路径上的编码，codeTable用于存储编码表
void generateHuffmanCode(Node* node, string prefix,
                         map<char, string>& codeTable) {
  // 如果当前节点为空，直接返回
  if (node == nullptr) return;

  // 如果当前节点是叶子节点，表示它存储了一个字符，将字符和编码存入codeTable
  if (node->character.has_value()) {
    codeTable[node->character.value()] = prefix;
  } else {
    // 递归生成左子节点的编码，左路径加"0"
    generateHuffmanCode(node->left, prefix + "0", codeTable);

    // 递归生成右子节点的编码，右路径加"1"
    generateHuffmanCode(node->right, prefix + "1", codeTable);
  }
}

int main() {
  // 定义字符和它们的频率
  map<char, int> frequencies = {{'A', 3}, {'B', 1}, {'C', 2}, {'D', 1}};

  // 构建哈夫曼树
  auto root = buildHuffmanTree(frequencies);

  if (root.has_value()) {
    // 用于存储生成的编码表
    map<char, string> codeTable;
    // 生成编码
    generateHuffmanCode(root.value(), "", codeTable);

    // 输出编码表
    cout << "哈夫曼编码表: " << endl;
    for (const auto& pair : codeTable) {
      cout << pair.first << ": " << pair.second << endl;
    }
  } else {
    // 若树为空，输出错误信息
    cout << "无法生成哈夫曼树" << endl;
  }

  return 0;
}
