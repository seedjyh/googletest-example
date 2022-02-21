# GoogleTest Example

本项目包含了Linux下使用GoogleTest的示例。

## 准备

- 需要安装[GoogleTest](https://github.com/google/googletest)。

## 对C++代码进行测试

执行：

```shell
# cd cpp
# make
# ./thetest
```

## 对C代码进行测试

和C++版本相比就一个变化：单元测试代码包含C语言业务头文件时，用`extern "C"`包裹起来。

执行：

```shell
# cd c
# make
# ./thetest
```

## 另一种测试C代码的方法

也可以修改C代码，将业务代码头文件用`extern "C"`包裹，如下：

```c
#ifdef __cplusplus
extern "C" {
#endif

// 业务代码

#ifdef __cplusplus
}
#endif
```

然后用`g++`编译业务代码。不过这样的话业务代码也会被编译成C++的目标文件，可能会和实际业务程序不完全一致。

执行：

```shell
# cd c2
# make
# ./thetest
```
