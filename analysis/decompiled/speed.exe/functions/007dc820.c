/* speed.exe 007dc820 cvtdate; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _cvtdate
   
   Library: Visual Studio 2003 Debug */

void __cdecl
cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9,int param_10,int param_11)

{
  uint uVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  if (param_2 == 1) {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      local_10 = (&DAT_00907390)[param_4];
    }
    else {
      local_10 = *(int *)(&DAT_009073c4 + param_4 * 4);
    }
    local_10 = local_10 + 1;
    iVar2 = (int)((param_3 - 0x46) * 0x16d + local_10 + -0xd +
                 (((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2) -
                 (int)(param_3 - 1) / 100) + (int)(param_3 + 299) / 400) % 7;
    if (param_6 < iVar2) {
      local_8 = param_5 * 7 + local_10 + (param_6 - iVar2);
    }
    else {
      local_8 = (param_5 + -1) * 7 + local_10 + (param_6 - iVar2);
    }
    if (param_5 == 5) {
      uVar1 = param_3 & 0x80000003;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
      }
      if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        local_14 = *(int *)(&DAT_00907394 + param_4 * 4);
      }
      else {
        local_14 = *(int *)(&DAT_009073c8 + param_4 * 4);
      }
      if (local_14 < local_8) {
        local_8 = local_8 + -7;
      }
    }
  }
  else {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      local_18 = (&DAT_00907390)[param_4];
    }
    else {
      local_18 = *(int *)(&DAT_009073c4 + param_4 * 4);
    }
    local_8 = local_18 + param_7;
  }
  if (param_1 == 1) {
    DAT_0090714c = local_8;
    DAT_00907150 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_00907148 = param_3;
  }
  else {
    DAT_00907158 = local_8;
    DAT_0090715c = DAT_009070b8 * 1000 +
                   ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    if (DAT_0090715c < 0) {
      DAT_0090715c = DAT_0090715c + 86400000;
      DAT_00907158 = local_8 + -1;
    }
    else if (86399999 < DAT_0090715c) {
      DAT_0090715c = DAT_0090715c + -86400000;
      DAT_00907158 = local_8 + 1;
    }
    DAT_00907154 = param_3;
  }
  return;
}

