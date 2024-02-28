#include "ATD_static.h"

void input_table(string file_name, table& tab)
{
    ifstream file(file_name);
    int i = 0;
    while (!file.eof())
    {
        flight fl;
        getline(file, fl.departure_point, '\n');
        getline(file, fl.flight_number, '\n');
        getline(file, fl.arrival_date, '\n');
        getline(file, fl.arrival_time, '\n');
        getline(file, fl.arrival_delay, '\n');
        tab.mas[i] = fl;
        i++;
    }
    file.close();
}

void input_fl(flight& fl)
{
    getline(cin, fl.departure_point, '\n');
    getline(cin, fl.flight_number, '\n');
    getline(cin, fl.arrival_date, '\n');
    getline(cin, fl.arrival_time, '\n');
    getline(cin, fl.arrival_delay, '\n');
}

int input_flight(table& tab)
{
    flight fl;
    input_fl(fl);
    int i = 0;
    for (; i < tab.n; i++)
    {
        if (fl.arrival_date.substr(6, 4) < tab.mas[i].arrival_date.substr(6, 4))
        {
            input_flight_in_pos(fl, i, tab);
            return 0;
        }
        else if (fl.arrival_date.substr(6, 4) == tab.mas[i].arrival_date.substr(6, 4))
        {
            if (fl.arrival_date.substr(3, 2) < tab.mas[i].arrival_date.substr(3, 2))
            {
                input_flight_in_pos(fl, i, tab);
                return 0;
            }
            else if (fl.arrival_date.substr(3, 2) == tab.mas[i].arrival_date.substr(3, 2))
            {
                if (fl.arrival_date.substr(0, 2) < tab.mas[i].arrival_date.substr(0, 2))
                {
                    input_flight_in_pos(fl, i, tab);
                    return 0;
                }
                else if (fl.arrival_date.substr(0, 2) == tab.mas[i].arrival_date.substr(0, 2))
                {
                    if (fl.arrival_time < tab.mas[i].arrival_time)
                    {
                        input_flight_in_pos(fl, i, tab);
                        return 0;
                    }
                    else if (fl.arrival_time == tab.mas[i].arrival_time)
                    {
                        return -1;
                    }
                }
            }
        }
    }
    input_flight_in_pos(fl, i, tab);
    return 0;
}

void input_flight_in_pos(flight fl, int pos, table& tab)
{
    for (int i = tab.n; i > pos; i--)
    {
        tab.mas[i] = tab.mas[i - 1];
    }
    tab.mas[pos] = fl;
    tab.n++;
}

void delete_flight(string num, table& tab, table& arch_tab)
{
    for (int i = 0; i < tab.n; i++)
    {
        if (tab.mas[i].flight_number == num)
        {
            arch_tab.mas[arch_tab.n] = tab.mas[i];
            for (; i < tab.n; i++)
            {
                tab.mas[i] = tab.mas[i + 1];
            }
            tab.n--;
            arch_tab.n++;
            break;
        }
    }
}

int count_delay(string date, table arch_tab, table tab)
{
    int count = 0;
    for (int i = 0; i < tab.n; i++)
    {
        if (tab.mas[i].arrival_date == date)
        {
            if (tab.mas[i].arrival_delay != "0")
            {
                count++;
            }
        }
    }
    for (int i = 0; i < arch_tab.n; i++)
    {
        if (arch_tab.mas[i].arrival_date == date)
        {
            if (arch_tab.mas[i].arrival_delay != "0")
            {
                count++;
            }
        }
    }
    return count;
}

void output_table(table tab)
{
    cout << setw(20) << left << "|Пункт вылета|" \
        << setw(20) << left << "|Рейс|" \
        << setw(20) << left << "|Дата|" \
        << setw(20) << left << "|Время|" \
        << setw(20) << left << "|Задержка|" << endl;
    for (int i = 0; i < tab.n; i++)
    {
        cout << setw(20) << tab.mas[i].departure_point \
            << setw(20) << left << tab.mas[i].flight_number \
            << setw(20) << left << tab.mas[i].arrival_date \
            << setw(20) << left << tab.mas[i].arrival_time \
            << setw(20) << left << tab.mas[i].arrival_delay << endl;
    }
}
