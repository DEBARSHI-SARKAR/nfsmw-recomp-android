/* speed.exe 00690050 FUN_00690050; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00690050(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  
  fVar1 = _DAT_00890968;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (fVar1 < *(float *)(param_1 + 0xcc)) {
    cVar2 = '\x01';
    if (*(int *)(param_1 + 0x104) == 1) goto LAB_00690090;
  }
  cVar2 = '\0';
LAB_00690090:
  *(char *)(param_1 + 0x10c) = cVar2;
  if (cVar2 == '\0') {
    *(float *)(param_1 + 0xd0) =
         (*(float *)(param_1 + 0xe0) / _DAT_008f8ab0) * param_2 + *(float *)(param_1 + 0xd0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  return;
}

