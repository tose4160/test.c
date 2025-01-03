//inThread(root, &pre);root和pre不都是指针吗，为什么pre要&
//在 ?inThread(root, &pre);? 中，?root? 是指向二叉树节点的指针，用于指定要进行线索化的二叉树的根节点。
//
//而 ?pre? 本身是一个指向 ?TreeNode? 类型的指针，使用& pre? 是为了能够在 ?inThread? 函数内部修改 ?pre? 指针所指向的内容。
//
//因为在 ?inThread? 函数中需要更新 ?pre? 指针，使其指向当前处理节点的前一个节点，如果不传递 ?pre? 的指针（即& pre? ），
// 那么在函数内部对 ?pre? 的修改将无法反映到函数外部，无法实现正确的线索化过程。

