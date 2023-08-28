
# C++ 98 基础回顾

## 基础输入输出

std\::cin 和 std\::cout 的基础使用方法

```cpp

#include <iostream>
using namespace std;

int main() {
	const string prompt("Input your name: ");
	cout << prompt;
	string firstname, lastname;
	cin >>  firstname >> lastname;
	cout << "Hello " << firstname << " " 
	<< lastname << endl;
}

```

## 基础数据类型

常用基础数据类型如下：

|  数据类型  |   描述   |   占用字节数   |
| --------- | ------- | :-------------: |
|   char    |  字符型或单字节整型   | 1 |
|   short   |  短整型             | 2 |
|   int     |  整型               | 4 |
|   long    |  长整型             | 4 |
| long long |  八字节长整型         | 8 |
|   bool    |  布尔类型            | 1 |
|   float   |  单精度浮点型        | 4 |
|   double  |  双精度浮点型         | 8 |
| long double |  保险双精度浮点型    | 8 |

上述提到一个概念为保险双精度浮点型，意在解决某些芯片可能将 `double` 类型处理为 4 字节，所以使用 `long doube` 可以确保其占用 8 个字节，`long long` 的用意也是如此。

## 数组与容器

在 C++ 98 中我们仍然会经常使用 C 风格的数组，其声明如下：

```cpp

#include <iostream>
using namespace std;

#define MAX_SIZE 100

int main() {
	int arr[MAX_SIZE];

	for (int i = 0; i < MAX_SIZE; i++) {
		arr[i] = 0;
		cout << arr[i] << " ";
	}
}

```

相应的，我们在基础部分接触最多的容器非字符串莫属，在 C 风格中，我们一般将字符串字面量声明为 `const char*` 类型，并通过 `cstring` 库中的 `strcpy` 函数将字面量拷贝到 `char*` 类型的变量中进行赋值。

> 需要注意的是在 Visual Studio 中使用 C 风格的一些存在内存泄漏风险的函数时，需要将 Properties -> Configuration Properties -> C/C++ -> General -> SDL checks 关闭。

```cpp

#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char name[10];
    const char* name_c = "name";
    strcpy(name, name_c);

    cout << name << endl;

}

```

尽管 C 风格字符串还有一系列函数便于进行各种操作，但这些内容都可以在 C 89 标准库文档中查询到。未来我们将完全摒弃这一套方法，使用现代 C++ 的标准来对字符串进行操作，所以你无需关心这些细节。

## 运算符与操作数


