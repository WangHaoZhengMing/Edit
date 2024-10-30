import Foundation

// 定义节点类，表示哈夫曼树中的一个节点
class Node {
    var character: Character?  // 已经是 Optional
    var frequency: Int        
    var left: Node?           // 已经是 Optional
    var right: Node?          // 已经是 Optional
    
    // 构造函数，用于初始化节点，内部节点没有字符
    init(character: Character? = nil, frequency: Int, left: Node? = nil, right: Node? = nil) {
        self.character = character
        self.frequency = frequency
        self.left = left
        self.right = right
    }
}

// 构建哈夫曼树函数，输入是字符频率表，返回树的根节点
func buildHuffmanTree(frequencies: [Character: Int]) -> Node? {
    // 将每个字符和其频率封装成节点，并将这些节点添加到数组中
    var nodes = frequencies.map { Node(character: $0.key, frequency: $0.value) }
    
    // 当数组中节点数量大于1时，继续合并
    while nodes.count > 1 {
        // 按频率从小到大排序节点，便于选出两个最小频率的节点
        nodes.sort { $0.frequency < $1.frequency }
        
        // 取出频率最小的两个节点
        let left = nodes.removeFirst()
        let right = nodes.removeFirst()
        
        // 创建一个新的父节点，其频率是两个子节点的频率之和
        let parent = Node(frequency: left.frequency + right.frequency, left: left, right: right)
        
        // 将新节点添加到节点列表中
        nodes.append(parent)
    }
    
    // 返回最后一个节点，即哈夫曼树的根节点
    return nodes.first
}

// 生成哈夫曼编码的递归函数，node是当前节点，prefix是当前路径上的编码，codeTable用于存储编码表
func generateHuffmanCode(node: Node?, prefix: String = "", codeTable: inout [Character: String]) {
    // 如果当前节点为空，直接返回
    guard let node = node else { return }
    
    // 如果当前节点是叶子节点，表示它存储了一个字符，将字符和编码存入codeTable
    if let character = node.character {
        codeTable[character] = prefix
    } else {
        // 递归生成左子节点的编码，左路径加"0"
        generateHuffmanCode(node: node.left, prefix: prefix + "0", codeTable: &codeTable)
        
        // 递归生成右子节点的编码，右路径加"1"
        generateHuffmanCode(node: node.right, prefix: prefix + "1", codeTable: &codeTable)
    }
}

// 测试哈夫曼编码的生成过程
let frequencies: [Character: Int] = ["A": 3, "B": 1, "C": 2, "D": 1]  // 定义字符和它们的频率
if let root = buildHuffmanTree(frequencies: frequencies) {  // 构建哈夫曼树
    var codeTable: [Character: String] = [:]               // 用于存储生成的编码表
    generateHuffmanCode(node: root, prefix: "", codeTable: &codeTable) // 生成编码
    print("哈夫曼编码表: \(codeTable)")                    // 输出编码表
} else {
    print("无法生成哈夫曼树")                              // 若树为空，输出错误信息
}