#include "string_man.h"


int main(void)
{
    char *str = "0Lay9FBvR0pcfYOcJsdpQar9tELSdm8DhnkdhTupQTsVAZnwxkHA78pNBC5bY9L7JUU08sBxHTDSiNNwZQDk8RGf4m4dwuvM9PATbWPkXF53VVZtJXz0PyDvP8FmHNivtS00JtM7pu6caLcIkOXNLE3Rol0kx506Y0AvF2yHYtm5Q9Pox8ZwGqSuaNZZebVLqOBq9NcsoWdC5hcw9lF6ExLp8Ryg9BBh1WkEXAj64Sk0VV9MNqpV4y762Saxj6pu61ZP942e6ASaz9bXyXFqKlBINhi3aTu1jIBKXYUxONPRjZZCIJpWtPik13Uz6xWqHKichLGSfdLUyExY6Q7t30c4q2aGRh8LgpiyOIvrvQbo7h2QmpetzycaX4OdULw6wbYzZG2e3jzTAPhQ0RQhVuDB7zxZbCbBRoyLjy6vIKNDiHdYFw6qlc56cim6P3J53MjyuOh7yxxvyOrruta0zSeX4ayrOmycCOjAyWq3LezCveJmeYuyKa9iVS6IAAJE9CA91Dxxu9F1Vhept6J2AvaxpU6asvHS47lUblyLPKUdbn4YwYhpHHpRbR1Cgc4TaPfBVDByfNYQE23AVvFy7rFAWo59MnPSrvFWMiaqfCooUtGBqtJ226ji4l8kY8tnpEdK5qu2z3L5a8d1by7NErYpvwrv0pfEuV4hiv0KPSnwOfZX9ogjDDCfgwp87xVhWXzuVPWFumngv4CFLbQ6danHn52VYRJME0UIWAbqZM0tTOnoUCk3EudtP0Fl2Gg61T8AMhV0uPz3X2MctZNwNPn5gvSJgnk8yLyuHG9wprkdznagMlAPht4Yw7xhdAjucfuigMfezZJpxiqTy0dVYjBSSg5krdgzfAp5f3lkpfCxzQTnMeXmQ0tK9O6nzNqfUniQPRuWOtJM8sRL7uDW9VlTIXaG688dvSDG2HFWVcFcUWpLLObIcsuoY7khgKbuCLYukUfCPpoAaVQ1eRkzVqGvchS0uyHWSYa62uYw";
    int len, i;

    len = _strlen(str);

    printf("%d\n", len);

    for (i = 0; str[i]; i++)
    {
        printf("%d", is_delimiter(" ,.\t\n", str[i]));
    }
    putchar('\n');

    return (0);
}