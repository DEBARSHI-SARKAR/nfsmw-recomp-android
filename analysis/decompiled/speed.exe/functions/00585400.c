/* speed.exe 00585400 FUN_00585400; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 */

undefined4 * __thiscall FUN_00585400(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_008a129c;
  *(undefined2 *)((int)param_1 + 0x26) = 1;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*param_2 == 0x30203) {
    param_1[5] = param_2 + 2;
  }
  else if (*param_2 == 0x30210) {
    param_1[5] = 0;
  }
  if (*param_2 == 0x30203) {
    piVar1 = (int *)param_1[5];
    if (((*piVar1 == -0x1891baba) && (piVar1[2] == 0x64486b50)) && (0x1ffff < (uint)piVar1[4])) {
      iVar2 = FUN_005af1c0(piVar1 + 10);
      goto LAB_0058549a;
    }
  }
  else if (*param_2 == 0x30210) {
    iVar2 = param_2[2];
    goto LAB_0058549a;
  }
  iVar2 = 0;
LAB_0058549a:
  iVar4 = 0;
  do {
    iVar3 = FUN_005af1c0((&PTR_s_MainMenu_fng_008f4320)[iVar4 * 2]);
    if (iVar2 == iVar3) {
      param_1[10] = &PTR_s_MainMenu_fng_008f4320 + iVar4 * 2;
      return param_1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xb2);
  param_1[10] = 0;
  return param_1;
}

