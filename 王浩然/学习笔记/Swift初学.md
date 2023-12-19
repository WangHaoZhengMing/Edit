## 变量与常量(Constants and Variables)

变量
```swift
var name = "wang"
name = "li"
var a = 3 , b = 4 //声明多个变量

//变量名称支持任意unicode字符,包括中文
var 姓名 = "wang"
var 😂 = "haha"
```

常量
```swift
let pi = 3.14
```

## 类型安全与类型推断

在swift中只能相同类型的数据类型可以相互赋值,我们将其称之为类型安全

在swift中,可以自行推断Int,Double,Bool,String四种数据类型,例如:
```swift
var a = 3
var b = 3.0
var c = ture
var d = "nihao"
```
>注意,我们可以用type(of:  )函数来判断变量的数据类型

## 输出函数print

 1. print函数可以输出任意数据类型的数据,比如:

 ```swift
 print(3,3.0,"nihao",ture)
 ```

2. 实现每个参数后面用特定字符分割,下面使用-分割的案例:

```swift
 print(3,3.0,"nihao",ture,separator:"_")
 ```

 3. 每个print语句后默认换行,若想要实现粘连两个语句,可以指定打印末尾,如:

```swift
 print(3,3.0,"nihao",ture,separator:"_",terminator:"\t")
 print(3)
 //此处我们用制表符来实现两段的粘连,大家当然可以用" "来实现
 ```

## 字符串的基本操作

1. 空串的生成
   在swift中,一共有两种生成空字符串
   ```swift
   var a =""
   var a = string()
   ```

2. 重复生成字符串
   ```swift
   var text = string(repeating:"a",count:10)
   //该字符串会重复打印a十次
   ```

3. 多行文本的输出
   ```swift
   var text = ```
   这是第一行
   这是第二行
   这是第三行
   这是第四行
    ` `` 

   var text = ```
   这是第一行\
   这是第二行\
   这是第三行\
   这是第四行
    ` `` 
    //在末尾加上\即表示虽不同行输入,但在一行输出 
    ```

4. 字符串的转义
   ```swift
   //在此处,我们想输出"你好"
   var text = "\"你好\""
   ```
 但这种情况下,如果转义太多,就会大大降低代码的可阅读性
   ```swift
   //在此处,我们想输出"你好"
   var text2 = #""你好""#// 在#""#之间的字符串会被完整打印,输出"你好"
   ```

## 字符串的操作

1. 连接字符串
   ```swift
   var text1 = "你好"
   var text2 = "世界"
   print(text1+text2)//你好世界(只有相同的类型可以相加)

   print(text1.appending(text2))//你好世界

   //先进行字符串的加和,再输出
   text1+=text2
   print(text1)//你好世界

   //进行不同数据类型的灵活的拼接
   var name = "wang"
   var age = "8"
   print("\(name)的年龄是\(age)岁") //wang的年龄是8岁
   ```
2. 字符串的属性
   是否为空
   ```swift
   var a = "hah"
   print(a.iseEmpty)//false
   ```
   统计字符
   ```swift
   var name("zha")
   print(name.count)//3
   ```
   返回真实的值
   ```swift
   var name("li")
   print(name.description)//li
   ```
   输出在debug下的值
   ```swift
   var name("ihao")
   print(name.debug.Description)//输出一个便于调试的值
   ```
   输出字符串的哈希值
   ```swift
   var name("hao")
   print(name.hashvalue)//每一个变量都有唯一的哈希值
   ```
   输出字符串的大小写状态
   ```swift
   var arr "This is a text"
   print(name.uppercased())//以全部大写输出
   print(name.uppercased())//以全部小写输出
   ```
   字符串的比较
   ```swift
   print("ab"=="ab")//ture
   ```
   检查字符串是否以某部分开头或者结尾
   ```swift
   //此处略去
   ```
   
