//树：没有两个前驱
//起始点是根节点
//树上面还有子树
//祖先节点
//子孙节点
//双亲节点
//孩子节点
//兄弟节点
//堂兄弟节点
//节点之间的路径
//路径长度
//属性：（一般默认从1开始）
//节点的层次（深度）--从上往下数
//节点的高度--从下往上数
//树的高度（深度）--总共多少层
//节点的度--有哪几个孩子（分支）
//树的度--各节点的度的最大值
//有序树---从逻辑上看，树中节点的个子树从左至右是有次序的，不能互换
//无序树---逻辑上看，树中节点的各子树从左至右是无次序的，可以互换
//森林-----森林是m(m>=0)棵互不相交的树的集合
//森林和树最显著的一个区别就是有没有根节点
//树的性质：
//常见考点1：节点数=总度数+1
//节点的度---节点有几个孩子（分支）
//常见节点2：度为m的树、m叉树的区别
//树的度---各节点的度的最大值（至少有一个节点度=m(有m个孩子））
//m叉树----每个节点最多只能有m个孩子的树（允许所有节点的度都<m)
//常见考点3：度为m的树第i层至多有m的i-1次方个节点（i>=1）
//           m叉树第i层至多有m的i-1次方个节点（i>=1)
//第一层：m^0
//第二层：m^1
//第三层：m^2
//常见考点4：高度为h的m叉树至多有(m^h-1)/(m-1)个节点
//等比数列求和得出
//常见考点5：高度为h的m叉树至少有h个节点
//           高度为h、度为m的树至少有h+m-1个节点
//常见考点6：具有n个节点的m叉树的最小高度为logm(n(m-1)+1)向上取整