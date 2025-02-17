#include <stdio.h>

struct Student
{
    long long id;
    int mid_score;
    int final_score;
};

char calculateGrade(int mid_score, int final_score)
{
    int val = mid_score + final_score;

    if (val >= 80)
    {
        return 'A';
    }
    else if (val >= 70)
    {
        return 'B';
    }
    else if (val >= 60)
    {
        return 'C';
    }
    else if (val >= 50)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main()
{

    struct Student students[5];

    // init value
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Student ID: ");
        scanf("%lld", &students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].mid_score);
        printf("Enter Student Final: ");
        scanf("%d", &students[i].final_score);
    }

    int val = 0;
    char grade ; 
    // value
    for (int i = 0; i < 5; i++)
    {
        grade = calculateGrade(students[i].mid_score , students[i].final_score);

        printf("Student ID %lld receives grade %c.\n", students[i].id, grade);
    }

    return 0;
}