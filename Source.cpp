#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{

	#pragma region Matriste Dogru
	
		//Mat goruntu(450, 450, CV_8UC3, Scalar(255, 0, 0));
		//line(goruntu, Point(92, 100), Point(410, 400), Scalar(), 3); // DOÐRU PARÇASINI "line" fonksiyonu yardýmýyla çizeriz
		//imshow("Matrisim", goruntu);
	
	#pragma endregion
	
	#pragma region Matriste Daire
	
		//Mat goruntu2(450, 450, CV_8UC3, Scalar());
		//circle(goruntu2, Point(400, 400), 1, Scalar(0, 0, 255), 3); // DAÝRE'YÝ "circle" fonksiyonu yardýmýyla çizeriz
		//imshow("Matrisim", goruntu2);
	
	#pragma endregion
	
	#pragma region Matriste Diktortgen
	
		/*Mat goruntu3(450, 450, CV_8UC3, Scalar(0, 255, 0));
		Rect diktortgen(0, 0, 50, 100);
		rectangle(goruntu3, diktortgen, Scalar(255), 3);
		imshow("Matrisim", goruntu3);
		*/
	#pragma endregion

	#pragma region Olympic Chambers
	
		Mat goruntu4(1080, 1920, CV_8UC3, Scalar(255, 255, 255));
		circle(goruntu4, Point(650, 400), 100, Scalar(255, 100), 16);
		circle(goruntu4, Point(900, 400), 100, Scalar(0), 16);
		circle(goruntu4, Point(1150, 400), 100, Scalar(0, 0, 255), 16);
		circle(goruntu4, Point(1025, 500), 100, Scalar(0, 200, 0), 16);
		circle(goruntu4, Point(775, 500), 100, Scalar(0, 255, 255), 16);
		imshow("Matrisim", goruntu4);
	
	#pragma endregion

	



	waitKey(0);

	return 0;
}
