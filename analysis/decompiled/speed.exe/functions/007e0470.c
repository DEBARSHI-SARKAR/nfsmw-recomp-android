/* speed.exe 007e0470 __store_num; analysis pseudocode, not buildable source.
 * calls 007e0520 FID_conflict:_store_number
 */

/* Library Function - Single Match
    __store_num
   
   Library: Visual Studio 2003 Debug */

void __store_num(int param_1,uint param_2,int *param_3,uint *param_4,int param_5)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_5 == 0) {
    if (param_2 < *param_4) {
      while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
        *(char *)(*param_3 + param_2) = (char)(param_1 % 10) + '0';
        param_1 = param_1 / 10;
        local_8 = local_8 + 1;
      }
      *param_3 = *param_3 + local_8;
      *param_4 = *param_4 - local_8;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    FID_conflict__store_number(param_1,param_3,param_4);
  }
  return;
}

