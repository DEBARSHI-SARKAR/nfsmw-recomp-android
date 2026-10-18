/* speed.exe 006ecf20 FUN_006ecf20; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006ecf20(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  pfVar1 = (float *)(param_1 + 100);
  *pfVar1 = DAT_008a2fc0;
  *(undefined4 *)(param_1 + 0x68) = DAT_008a2fc4;
  *(undefined4 *)(param_1 + 0x6c) = DAT_008a2fc8;
  *(undefined4 *)(param_1 + 0x70) = DAT_008a2fcc;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((((undefined4 **)DAT_00919694 != &DAT_00919694) && (DAT_00919694 != (undefined4 *)0x0)) &&
     (DAT_00919694 != (undefined4 *)0x4)) {
    if (((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = DAT_00919694 + -1;
    }
    iVar4 = puVar5[7];
    uVar2 = *(undefined4 *)(iVar4 + 0x48);
    uVar3 = *(undefined4 *)(iVar4 + 0x40);
    *pfVar1 = -*(float *)(iVar4 + 0x44);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
    if (((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0)) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = DAT_00919694 + -1;
    }
    iVar4 = (**(code **)(*piVar6 + 0x10))();
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar4 + 0x94);
    }
  }
  if ((((undefined4 **)DAT_00919704 == &DAT_00919704) || (DAT_00919704 == (undefined4 *)0x0)) ||
     (DAT_00919704 == (undefined4 *)0x4)) {
    *(float *)(param_1 + 0x74) = *pfVar1;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x70);
  }
  else {
    if (((undefined4 **)DAT_00919704 == &DAT_00919704) || (DAT_00919704 == (undefined4 *)0x0)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = DAT_00919704 + -1;
    }
    iVar4 = puVar5[7];
    uVar2 = *(undefined4 *)(iVar4 + 0x48);
    uVar3 = *(undefined4 *)(iVar4 + 0x40);
    *(float *)(param_1 + 0x74) = -*(float *)(iVar4 + 0x44);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
    if (((undefined4 **)DAT_00919704 == &DAT_00919704) || (DAT_00919704 == (undefined4 *)0x0)) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = DAT_00919704 + -1;
    }
    iVar4 = (**(code **)(*piVar6 + 0x10))();
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar4 + 0x94);
      return;
    }
  }
  return;
}

