/* speed.exe 007eef91 FUN_007eef91; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 007e6630 __stricmp
 * calls 007f0e0f FUN_007f0e0f
 * calls 007f0df9 FUN_007f0df9
 */

int FUN_007eef91(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  char *local_8;
  
  iVar5 = 1;
  FUN_007ec1bd();
  iVar2 = DAT_009bb174;
  if (DAT_009bb174 != 0) {
    iVar5 = *(int *)(DAT_009bb174 + 0xc) + 1;
  }
  local_10 = 0;
  local_1c = &local_18;
  local_28 = &local_24;
  iVar4 = iVar5 * 0x105 + 0x230;
  local_30 = 6;
  local_2c = 0x4d5;
  local_24 = 5;
  local_20 = "d:\\packages\\realcore\\6.24.00\\source\\file\\cmn\\prefetch.cpp";
  local_18 = 1;
  local_14 = "FCache Info";
  DAT_009bb174 = (**(code **)*DAT_009076dc)(iVar4,&local_30);
  FUN_007f0df9(DAT_009bb174,iVar4);
  iVar4 = DAT_009bb174;
  *(int *)(DAT_009bb174 + 0xc) = iVar5;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
  }
  local_c = 0;
  local_8 = (char *)(iVar2 + 0x128);
  iVar5 = iVar4 + 0x128;
  if (*(int *)(iVar4 + 0xc) != 1 && -1 < *(int *)(iVar4 + 0xc) + -1) {
    do {
      iVar3 = __stricmp(param_1,local_8);
      iVar4 = DAT_009bb174;
      if (iVar3 < 1) break;
      FUN_007f0e0f(iVar5,local_8,0x105);
      local_8 = local_8 + 0x105;
      iVar5 = iVar5 + 0x105;
      local_c = local_c + 1;
      iVar4 = DAT_009bb174;
    } while (local_c < *(int *)(DAT_009bb174 + 0xc) + -1);
  }
  iVar3 = iVar5 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar3] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)(iVar5 + 0x104) = 0;
  FUN_007f0e0f(iVar5 + 0x105,local_8,((*(int *)(iVar4 + 0xc) - local_c) + -1) * 0x105);
  if (iVar2 != 0) {
    (**(code **)(*DAT_009076dc + 4))(iVar2,0);
  }
  FUN_007ec1c8();
  DAT_009bb159 = 1;
  return iVar5;
}

