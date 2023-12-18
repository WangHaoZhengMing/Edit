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

 3. 每个print语句后默认换行，若想要实现粘连两个语句，可以指定打印末尾，如：

```swift
 print(3,3.0,"nihao",ture,separator:"_"，terminator:"\t")
 print(3)
 //此处我们用制表符来实现两段的粘连，大家当然可以用“ ”来实现
 ```

## 字符串的基本操作

1. 空串的生成
   在swift中，一共有两种生成字符串