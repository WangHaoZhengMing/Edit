//请看清楚，这是Go语言，为啥用go，因为我用c它一直不通过，呵呵呵
// 大学里每一门课程都有一定的学分。只有通过这门课的考试，才能获得相应的学分。课程绩点的计算方法通常是：（百分制成绩-50)/10 取整。
//成绩100，对应绩点为5，成绩90~99对应绩点为4，......，成绩60~69对应绩点为1，成绩小于60，对应绩点为0。
// 平均学分绩点的计算方法是：是将学生修过的每一门课程的绩点乘以该门课程的学分，累加后再除以总学分。 
//平均学分绩点可以作为学生学习能力与质量的综合评价指标之一。请编程计算一个学生的平均学分绩点。
package main

import (
	"fmt"
	"math"
)

func scoreToGradePoint(score int) int {
	if score >= 60 {
		return (score - 50) / 10
	} else {
		return 0
	}
}

func main() {
	var n int
	fmt.Scan(&n)

	var totalPoints, totalCredits float64

	for i := 0; i < n; i++ {
		var credit, score int
		fmt.Scan(&credit, &score)

		gradePoint := scoreToGradePoint(score)
		totalPoints += float64(gradePoint * credit)
		totalCredits += float64(credit)
	}

	averageGradePoint := totalPoints / totalCredits
	fmt.Printf("%.1f\n", math.Round(averageGradePoint*10)/10)
}
