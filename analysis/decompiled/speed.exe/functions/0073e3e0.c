/* speed.exe 0073e3e0 FUN_0073e3e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0073e3e0(int param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  
  piVar2 = *(int **)(param_1 + 0x1c8);
  fVar1 = *(float *)(*(int *)(*piVar2 + 8) + 0x44);
  if ((fVar1 != _DAT_00890968) ||
     (fVar1 = *(float *)(*(int *)(*piVar2 + 8) + 0x44), fVar1 != _DAT_00890968)) {
    fVar3 = (float)DAT_00925ae8;
    *(undefined1 *)(piVar2 + 3) = 1;
    *(undefined1 *)((int)piVar2 + 0xd) = 1;
    *(undefined1 *)((int)piVar2 + 0xe) = 0;
    piVar2[1] = (int)(fVar3 * _DAT_00890984);
    piVar2[2] = (int)fVar1;
  }
  piVar2 = *(int **)(param_1 + 0x1c4);
  fVar1 = *(float *)(*(int *)(*piVar2 + 8) + 0x44);
  if (fVar1 != _DAT_00890968) {
    fVar3 = (float)DAT_00925ae8;
    *(undefined1 *)(piVar2 + 3) = 1;
    *(undefined1 *)((int)piVar2 + 0xd) = 1;
    *(undefined1 *)((int)piVar2 + 0xe) = 0;
    piVar2[1] = (int)(fVar3 * _DAT_00890984);
    piVar2[2] = (int)fVar1;
  }
  piVar2 = *(int **)(param_1 + 0x1c0);
  fVar1 = *(float *)(*(int *)(*piVar2 + 8) + 0x44);
  if (fVar1 == _DAT_00890968) {
    return;
  }
  fVar3 = (float)DAT_00925b14;
  *(undefined1 *)((int)piVar2 + 0xd) = 1;
  *(undefined1 *)(piVar2 + 3) = 0;
  *(undefined1 *)((int)piVar2 + 0xe) = 0;
  piVar2[1] = (int)(fVar3 * _DAT_00890984);
  piVar2[2] = (int)fVar1;
  return;
}

