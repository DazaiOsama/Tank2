#ifndef LOLI_H
#define LOLI_H

const int HP=100;
class loler
{
 char m_filename[HP];
 char m_data[HP];
public:
 void setFileName();
 void write();
  void setData();
  void readFromFile();
};
#endif // LOLI_H
