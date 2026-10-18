/* speed.exe 0073e2f0 FUN_0073e2f0; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 */

void __fastcall FUN_0073e2f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  if (*param_1 == 1) {
    piVar5 = param_1 + 0x6b;
  }
  else {
    if (*param_1 != 2) goto LAB_0073e325;
    piVar5 = param_1 + 0x61;
    param_1[0x5f] = 0;
  }
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
LAB_0073e325:
  FUN_00444fe0(param_1 + 4,piVar5[2] + 0x40);
  FUN_00444fe0(param_1 + 0x14,piVar5[2] + 0x80);
  FUN_00444fe0(param_1 + 0x2c,piVar5[2]);
  iVar2 = piVar5[2];
  iVar3 = *(int *)(iVar2 + 0xcc);
  iVar1 = *(int *)(iVar2 + 200);
  iVar4 = *(int *)(iVar2 + 0xc0);
  param_1[0x29] = *(int *)(iVar2 + 0xc4);
  param_1[0x28] = iVar4;
  param_1[0x2a] = iVar1;
  param_1[0x2b] = iVar3;
  param_1[0x24] = *(int *)(piVar5[2] + 0xdc);
  param_1[0x25] = *(int *)(piVar5[2] + 0xd0);
  param_1[0x26] = *(int *)(piVar5[2] + 0xd4);
  param_1[0x5c] = *(int *)(piVar5[2] + 0xd8);
  return;
}

