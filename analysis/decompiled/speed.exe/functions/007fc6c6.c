/* speed.exe 007fc6c6 FUN_007fc6c6; analysis pseudocode, not buildable source.
 * calls 00801939 FUN_00801939
 */

void FUN_007fc6c6(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = -0x100;
  do {
    if (iVar3 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar3;
      if (0xff < iVar3) {
        iVar1 = 0xff;
      }
    }
    (&DAT_009c6c00)[iVar3] = (char)iVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x200);
  DAT_009c67f0 = param_1;
  DAT_009c67e8 = param_2;
  puVar2 = &DAT_009c66e0;
  DAT_009c67e4 = param_3;
  do {
    *puVar2 = *(undefined4 *)(param_3 + -0x9c66e0 + (int)puVar2);
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x9c67e0);
  if (param_4 < 6) {
    if (param_4 < 5) {
      DAT_009c67e0 = &DAT_0090a7b8;
      DAT_009c67ec = &DAT_0090a3b8;
    }
    else {
      DAT_009c67e0 = &DAT_0090a8b8;
      DAT_009c67ec = &DAT_0090a4b8;
    }
  }
  else {
    DAT_009c67e0 = &DAT_0090a9b8;
    DAT_009c67ec = &DAT_0090a5b8;
  }
  FUN_00801939(param_4);
  return;
}

