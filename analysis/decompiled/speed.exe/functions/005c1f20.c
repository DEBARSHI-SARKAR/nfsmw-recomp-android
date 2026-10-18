/* speed.exe 005c1f20 FUN_005c1f20; analysis pseudocode, not buildable source.
 * calls 005c0980 FUN_005c0980
 * calls 005c09e0 FUN_005c09e0
 * calls 005aecb0 FUN_005aecb0
 * calls 005c0b70 FUN_005c0b70
 * calls 005bdda0 FUN_005bdda0
 * calls 005c0a70 FUN_005c0a70
 * calls 005c0ae0 FUN_005c0ae0
 */

uint __thiscall FUN_005c1f20(byte *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  uVar2 = FUN_005aecb0(param_2);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0xc) != iVar1)) {
    uVar2 = *param_1 - 1;
    switch(uVar2) {
    case 0:
      FUN_005bdda0(param_1,iVar1,&param_2);
      uVar2 = FUN_005c0980(iVar1,&param_2);
      return uVar2;
    case 2:
      local_c = 0;
      local_10 = 0;
      FUN_005bdda0(param_1,iVar1,&local_10);
      uVar2 = FUN_005c0a70(iVar1,&local_10);
      return uVar2;
    case 3:
      local_8 = 0;
      local_c = 0;
      local_10 = 0;
      FUN_005bdda0(param_1,iVar1,&local_10);
      uVar2 = FUN_005c09e0(iVar1,&local_10);
      return uVar2;
    case 4:
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0x3f800000;
      FUN_005bdda0(param_1,iVar1,&local_10);
      uVar2 = FUN_005c0b70(iVar1,&local_10);
      return uVar2;
    case 5:
      FUN_005bdda0(param_1,iVar1,&local_10);
      uVar2 = FUN_005c0ae0(iVar1,&local_10);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}

