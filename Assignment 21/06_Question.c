#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[15];
    int id;
    float salary;
};
void swap(struct employee *employee1, struct employee *employee2)
{
    struct employee *temp = (struct employee *)malloc(sizeof(struct employee));

    int i = 0;
    while (i < 15)
    {
        temp->name[i] = employee1->name[i];
        i++;
    }
    temp->salary = employee1->salary;
    temp->id = employee1->id;
    i = 0;
    while (i < 15)
    {
        employee1->name[i] = employee2->name[i];
        i++;
    }
    employee1->salary = employee2->salary;
    employee1->id = employee2->id;
    i = 0;
    while (i < 15)
    {
        employee2->name[i] = temp->name[i];
        i++;
    }
    employee2->salary = temp->salary;
    employee2->id = temp->id;
}
void sort_employee_by_name(struct employee *list_employee, int size)
{
    int i = 0, j = 0;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            int k = 0;
            while (k < 15)
            {
                if ((list_employee[i].name[k] >= 'A' && list_employee[i].name[k] <= 'Z') && (list_employee[j].name[k] >= 'A' && list_employee[j].name[k] <= 'Z'))
                {
                    if (list_employee[i].name[k] > list_employee[j].name[k])
                    {
                        swap(&list_employee[i], &list_employee[j]);
                    }
                    break;
                }
                else if ((list_employee[i].name[k] >= 'a' && list_employee[i].name[k] <= 'z') && (list_employee[j].name[k] >= 'a' && list_employee[j].name[k] <= 'z'))
                {
                    if (list_employee[i].name[k] > list_employee[j].name[k])
                    {
                        swap(&list_employee[i], &list_employee[j]);
                    }
                    break;
                }
                else if ((list_employee[i].name[k] >= 'a' && list_employee[i].name[k] <= 'z') && (list_employee[j].name[k] >= 'A' && list_employee[j].name[k] <= 'Z'))
                {
                    int cap_count = 0, small_count = 0;
                    char cap_char = 'A', small_char = 'a';
                    while (cap_char != list_employee[j].name[k])
                    {
                        cap_char++;
                        cap_count++;
                    }
                    while (small_char != list_employee[i].name[k])
                    {
                        small_char++;
                        small_count++;
                    }
                    if (small_count > cap_count)
                    {
                        swap(&list_employee[i], &list_employee[j]);
                    }
                    break;
                }
                else if ((list_employee[i].name[k] >= 'A' && list_employee[i].name[k] <= 'Z') && (list_employee[j].name[k] >= 'a' && list_employee[j].name[k] <= 'z'))
                {
                    int cap_count = 0, small_count = 0;
                    char cap_char = 'A', small_char = 'a';
                    while (cap_char != list_employee[i].name[k])
                    {
                        cap_char++;
                        cap_count++;
                    }
                    while (small_char != list_employee[j].name[k])
                    {
                        small_char++;
                        small_count++;
                    }
                    if (cap_count > small_count)
                    {
                        swap(&list_employee[i], &list_employee[j]);
                    }
                    break;
                }
                k++;
            }
            j++;
        }
        i++;
    }
}
int main()
{
    struct employee google[4];
    int i = 0, j;
    printf("Enter employee name's\n\n\n");
    while (i < 4)
    {
        printf("\nEnter employee %d\n\nName: ", i + 1);
        scanf("%s", &(google[i].name[0]));
        printf("salary: ");
        scanf("%f",&google[i].salary);
        printf("enter the id: ");
        scanf("%d", &google[i].id);
        i++;
    }
    sort_employee_by_name(google, 4);
    system("cls");
    printf("\n\n\nAFTER SORTING EMPLOYEE NAME'S\n");
    i = 0;
    while (i < 4)
    {
        printf("\n\nEmployee %d\n\nName:", i + 1);
        puts(google[i].name);
        printf("salary: %1.2f", google[i].salary);
        printf("\nID: %d", google[i].id);

        i++;
    }
}