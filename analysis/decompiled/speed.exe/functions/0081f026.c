/* speed.exe 0081f026 FUN_0081f026; analysis pseudocode, not buildable source.
 * calls 0081efb2 FUN_0081efb2
 * calls 0081f207 FUN_0081f207
 * calls 00823691 FUN_00823691
 * calls 00823654 FUN_00823654
 * calls 00823739 FUN_00823739
 * calls 00822ecf FUN_00822ecf
 * calls 00823606 FUN_00823606
 * calls 008235d9 FUN_008235d9
 */

int FUN_0081f026(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,int param_8,int param_9,int param_10,
                undefined4 param_11,undefined1 param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 local_70;
  undefined2 local_6e;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 auStack_5c [6];
  undefined4 local_44 [6];
  undefined4 auStack_2c [9];
  int local_8;
  
  iVar5 = DAT_009c21f4;
  iVar4 = param_1 * 0x88 + DAT_009c2014;
  iVar2 = iVar4 + 0x18;
  *(int *)(iVar4 + 0x50) = iVar2;
  *(int *)(iVar4 + 0x54) = iVar2;
  *(int *)(iVar4 + 0x58) = iVar2;
  *(int *)(iVar4 + 0x5c) = iVar2;
  *(int *)(iVar4 + 0x60) = iVar2;
  *(int *)(iVar4 + 100) = iVar2;
  *(int *)(iVar4 + 0x68) = iVar2;
  local_8 = param_1 * 0x90;
  iVar5 = param_1 * 0x90 + iVar5;
  iVar3 = 0;
  *(undefined4 *)(iVar4 + 0x84) = 0;
  local_6e = (undefined2)param_1;
  local_6b = *(undefined1 *)(iVar5 + 0x22);
  local_6c = *(undefined1 *)(iVar5 + 0x23);
  local_6a = param_12;
  local_70 = *(undefined2 *)(iVar5 + 0x20);
  local_68 = param_2;
  local_64 = param_3;
  local_60 = *(undefined4 *)(iVar5 + 0x14);
  *(code **)(iVar4 + 0x78) = FUN_00823606;
  *(code **)(iVar4 + 0x7c) = FUN_00823654;
  *(code **)(iVar4 + 0x70) = FUN_008235d9;
  *(undefined1 **)(iVar4 + 0x80) = &LAB_00823681;
  *(undefined1 **)(iVar4 + 0x6c) = &LAB_00823763;
  *(code **)(iVar4 + 0x74) = FUN_00823587;
  if (*(char *)(iVar5 + 0x23) != '\0') {
    do {
      iVar1 = iVar3 * 4;
      local_44[iVar3] = *(undefined4 *)((int)local_44 + (param_9 - (int)local_44) + iVar1);
      auStack_5c[iVar3] = *(undefined4 *)((int)local_44 + (param_8 - (int)local_44) + iVar1);
      auStack_2c[iVar3] = *(undefined4 *)((int)local_44 + (param_10 - (int)local_44) + iVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(iVar5 + 0x23));
  }
  FUN_00823691(iVar2,&local_70);
  FUN_0081efb2(param_1);
  param_2 = 0;
  if (*(char *)(iVar5 + 0x23) != '\0') {
    _param_12 = (short *)(iVar5 + 4);
    do {
      FUN_0081f207((int)*_param_12);
      param_2 = param_2 + 1;
      _param_12 = _param_12 + 1;
    } while (param_2 < (int)(uint)*(byte *)(iVar5 + 0x23));
  }
  if (*(code **)(iVar4 + 0x78) != (code *)0x0) {
    (**(code **)(iVar4 + 0x78))(*(undefined4 *)(iVar4 + 0x60),param_6);
  }
  if (*(code **)(iVar4 + 0x7c) != (code *)0x0) {
    (**(code **)(iVar4 + 0x7c))(*(undefined4 *)(iVar4 + 0x60),param_7);
  }
  if (*(code **)(iVar4 + 0x70) != (code *)0x0) {
    (**(code **)(iVar4 + 0x70))
              (*(undefined4 *)(iVar4 + 0x5c),*(undefined2 *)(local_8 + 0x6e + DAT_009c21f4));
  }
  iVar2 = FUN_00823739(iVar2);
  iVar3 = 0;
  if (-1 < iVar2) {
    if (0 < DAT_0090bd18) {
      do {
        FUN_00822ecf(param_1,iVar3,
                     *(float *)(*(int *)(iVar5 + 100) + iVar3 * 4) * *(float *)(iVar5 + 0x48));
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_0090bd18);
    }
    iVar2 = 0;
  }
  return iVar2;
}

