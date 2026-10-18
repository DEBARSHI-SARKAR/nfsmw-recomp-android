/* speed.exe 007dfe40 __expandtime; analysis pseudocode, not buildable source.
 * calls 007e0420 __store_str
 * calls 007e05d0 __store_winword
 * calls 007dbfc0 ___tzset
 * calls 007e0470 __store_num
 */

/* Library Function - Single Match
    __expandtime
   
   Library: Visual Studio 2003 Debug */

undefined4
__expandtime(undefined4 param_1,undefined1 param_2,undefined4 *param_3,int *param_4,int *param_5,
            int param_6,int param_7)

{
  int iVar1;
  int local_c;
  int local_8;
  
  switch(param_2) {
  case 0x25:
    *(undefined1 *)*param_4 = 0x25;
    *param_4 = *param_4 + 1;
    *param_5 = *param_5 + -1;
    break;
  case 0x41:
    __store_str(*(undefined4 *)(param_6 + 0x1c + param_3[6] * 4),param_4,param_5);
    break;
  case 0x42:
    __store_str(*(undefined4 *)(param_6 + 0x68 + param_3[4] * 4),param_4,param_5);
    break;
  case 0x48:
    __store_num(param_3[2],2,param_4,param_5,param_7);
    break;
  case 0x49:
    local_c = (int)param_3[2] % 0xc;
    if (local_c == 0) {
      local_c = 0xc;
    }
    __store_num(local_c,2,param_4,param_5,param_7);
    break;
  case 0x4d:
    __store_num(param_3[1],2,param_4,param_5,param_7);
    break;
  case 0x53:
    __store_num(*param_3,2,param_4,param_5,param_7);
    break;
  case 0x55:
    local_8 = param_3[6];
    goto LAB_007e01b4;
  case 0x57:
    if (param_3[6] == 0) {
      local_8 = 6;
    }
    else {
      local_8 = param_3[6] + -1;
    }
LAB_007e01b4:
    if ((int)param_3[7] < local_8) {
      local_c = 0;
    }
    else {
      local_c = (int)param_3[7] / 7;
      if (local_8 <= (int)param_3[7] % 7) {
        local_c = local_c + 1;
      }
    }
    __store_num(local_c,2,param_4,param_5,param_7);
    break;
  case 0x58:
    iVar1 = __store_winword(param_1,2,param_3,param_4,param_5,param_6);
    if (iVar1 == 0) {
      return 0;
    }
    break;
  case 0x59:
    __store_num(((int)param_3[5] / 100 + 0x13) * 100 + (int)param_3[5] % 100,4,param_4,param_5,
                param_7);
    break;
  case 0x5a:
  case 0x7a:
    ___tzset();
    __store_str((&PTR_DAT_00907140)[param_3[8] != 0],param_4,param_5);
    break;
  case 0x61:
    __store_str(*(undefined4 *)(param_6 + param_3[6] * 4),param_4,param_5);
    break;
  case 0x62:
    __store_str(*(undefined4 *)(param_6 + 0x38 + param_3[4] * 4),param_4,param_5);
    break;
  case 99:
    if (param_7 == 0) {
      iVar1 = __store_winword(param_1,0,param_3,param_4,param_5,param_6);
      if (iVar1 == 0) {
        return 0;
      }
      if (*param_5 == 0) {
        return 0;
      }
      *(undefined1 *)*param_4 = 0x20;
      *param_4 = *param_4 + 1;
      *param_5 = *param_5 + -1;
      iVar1 = __store_winword(param_1,2,param_3,param_4,param_5,param_6);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = __store_winword(param_1,1,param_3,param_4,param_5,param_6);
      if (iVar1 == 0) {
        return 0;
      }
      if (*param_5 == 0) {
        return 0;
      }
      *(undefined1 *)*param_4 = 0x20;
      *param_4 = *param_4 + 1;
      *param_5 = *param_5 + -1;
      iVar1 = __store_winword(param_1,2,param_3,param_4,param_5,param_6);
      if (iVar1 == 0) {
        return 0;
      }
    }
    break;
  case 100:
    __store_num(param_3[3],2,param_4,param_5,param_7);
    break;
  case 0x6a:
    __store_num(param_3[7] + 1,3,param_4,param_5,param_7);
    break;
  case 0x6d:
    __store_num(param_3[4] + 1,2,param_4,param_5,param_7);
    break;
  case 0x70:
    if ((int)param_3[2] < 0xc) {
      __store_str(*(undefined4 *)(param_6 + 0x98),param_4,param_5);
    }
    else {
      __store_str(*(undefined4 *)(param_6 + 0x9c),param_4,param_5);
    }
    break;
  case 0x77:
    __store_num(param_3[6],1,param_4,param_5,param_7);
    break;
  case 0x78:
    if (param_7 == 0) {
      iVar1 = __store_winword(param_1,0,param_3,param_4,param_5,param_6);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = __store_winword(param_1,1,param_3,param_4,param_5,param_6);
      if (iVar1 == 0) {
        return 0;
      }
    }
    break;
  case 0x79:
    __store_num((int)param_3[5] % 100,2,param_4,param_5,param_7);
  }
  return 1;
}

