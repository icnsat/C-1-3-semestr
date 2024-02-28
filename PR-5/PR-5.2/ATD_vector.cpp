#include "ATD_vector.h"

void input_table_vec(string file_name, table& tab)
{
    ifstream file(file_name);
    while (!file.eof())
    {
        flight fl;
        getline(file, fl.departure_point, '\n');
        getline(file, fl.flight_number, '\n');
        getline(file, fl.arrival_date, '\n');
        getline(file, fl.arrival_time, '\n');
        getline(file, fl.arrival_delay, '\n');
        tab.vec.push_back(fl);
    }
    file.close();
}

void input_fl_vec(flight& fl)
{
    getline(cin, fl.departure_point, '\n');
    getline(cin, fl.flight_number, '\n');
    getline(cin, fl.arrival_date, '\n');
    getline(cin, fl.arrival_time, '\n');
    getline(cin, fl.arrival_delay, '\n');
}

int input_flight_vec(table& tab)
{
    flight fl;
    input_fl_vec(fl);
    int i = 0;
    for (; i < tab.vec.size(); i++)
    {
        if (fl.arrival_date.substr(6, 4) < tab.vec[i].arrival_date.substr(6, 4))
        {
            tab.vec.insert(tab.vec.begin() + i, fl);
            return 0;
        }
        else if (fl.arrival_date.substr(6, 4) == tab.vec[i].arrival_date.substr(6, 4))
        {
            if (fl.arrival_date.substr(3, 2) < tab.vec[i].arrival_date.substr(3, 2))
            {
                tab.vec.insert(tab.vec.begin() + i, fl);
                return 0;
            }
            else if (fl.arrival_date.substr(3, 2) == tab.vec[i].arrival_date.substr(3, 2))
            {
                if (fl.arrival_date.substr(0, 2) < tab.vec[i].arrival_date.substr(0, 2))
                {
                    tab.vec.insert(tab.vec.begin() + i, fl);
                    return 0;
                }
                else if (fl.arrival_date.substr(0, 2) == tab.vec[i].arrival_date.substr(0, 2))
                {
                    if (fl.arrival_time < tab.vec[i].arrival_time)
                    {
                        tab.vec.insert(tab.vec.begin() + i, fl);
                        return 0;
                    }
                    else if (fl.arrival_time == tab.vec[i].arrival_time)
                    {
                        return -1;
                    }
                }
            }
        }
    }
    tab.vec.push_back(fl);
    return 0;
}

void delete_flight_vec(string num, table& tab, table& arch_tab)
{
    for (int i = 0; i < tab.vec.size(); i++)
    {
        if (tab.vec[i].flight_number == num)
        {
            arch_tab.vec.push_back(tab.vec[i]);
            tab.vec.erase(tab.vec.begin() + i);
            break;
        }
    }
}

int count_delay_vec(string date, table arch_tab, table tab)
{
    int count = 0;
    for (int i = 0; i < tab.vec.size(); i++)
    {
        if (tab.vec[i].arrival_date == date)
        {
            if (tab.vec[i].arrival_delay != "0")
            {
                count++;
            }
        }
    }
    for (int i = 0; i < arch_tab.vec.size(); i++)
    {
        if (arch_tab.vec[i].arrival_date == date)
        {
            if (arch_tab.vec[i].arrival_delay != "0")
            {
                count++;
            }
        }
    }
    return count;
}

void output_table_vec(table tab)
{
    cout << setw(20) << left << "|Пункт вылета|" \
        << setw(20) << left << "|Рейс|" \
        << setw(20) << left << "|Дата|" \
        << setw(20) << left << "|Время|" \
        << setw(20) << left << "|Задержка|" << endl;
    for (int i = 0; i < tab.vec.size(); i++)
    {
        cout << setw(20) << tab.vec[i].departure_point \
            << setw(20) << left << tab.vec[i].flight_number \
            << setw(20) << left << tab.vec[i].arrival_date \
            << setw(20) << left << tab.vec[i].arrival_time \
            << setw(20) << left << tab.vec[i].arrival_delay << endl;
    }
}