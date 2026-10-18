/* speed.exe 005882b0 FUN_005882b0; analysis pseudocode, not buildable source.
 * calls 005158b0 FUN_005158b0
 */

int __thiscall FUN_005882b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2c) + -4;
  }
  while( true ) {
    if (param_1 == -0x2c) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x28;
    }
    if (iVar3 == iVar2) break;
    if (*(char *)(iVar3 + 0x29) == '\0') {
      local_c = *(undefined4 *)(iVar3 + 0x10);
      local_18 = *(undefined4 *)(iVar3 + 0x14);
      local_10 = *(undefined4 *)(iVar3 + 0xc);
      local_14 = *(undefined4 *)(iVar3 + 0x18);
      cVar1 = FUN_005158b0(param_2,param_3,&local_10,&local_18);
      if (cVar1 != '\0') {
        return iVar3;
      }
    }
    if (*(int *)(iVar3 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4) + -4;
    }
  }
  return 0;
}

