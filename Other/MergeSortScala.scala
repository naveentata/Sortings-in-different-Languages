object MergeSortScala extends App {

  def merge(left: List[Int], right: List[Int]): List[Int] = {
    (left, right) match {
      case(left, Nil) => left
      case(Nil, right) => right
      case(leftHead :: leftTail, rightHead :: rightTail) =>
        if (leftHead < rightHead) leftHead::merge(leftTail, right)
        else rightHead :: merge(left, rightTail)
    }
  }

  def mergeSort(list: List[Int]): List[Int] = {
    val n = list.length / 2
    if (n == 0) list
    else {
      val (left, right) = list.splitAt(n)
      merge(mergeSort(left), mergeSort(right))
    }
	}

  override def main(args: Array[String]): Unit = {
    val unsortedList = List(9,8,7,6,5,4,3,2,1)
    println(s"Given list $unsortedList")

    val sortedList = mergeSort(unsortedList)
    println(s"sorted list $sortedList")
  }
}
