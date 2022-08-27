# AtCoder C++ Workspace

## Use Case

1. コンテストのディレクトリ作成

```bash
cd contests
acc new {contestId}
```

2. コードを実装する

3. ローカルテスト

```bash
cd {contestId}/{taskId}
g++ main.cpp && oj t
```

4. 提出

```bash
acc s
```

## Setup

1. ログイン

```bash
acc login
oj login https://atcoder.jp/
```

2. atcoder-cli の設定

```bash
cp -r templates/* `acc config-dir`
acc config default-template cpp
acc config default-task-choice all
acc config default-test-dirname-format test
```
