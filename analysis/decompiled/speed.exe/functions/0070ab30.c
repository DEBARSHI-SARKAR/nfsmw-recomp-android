/* speed.exe 0070ab30 FUN_0070ab30; analysis pseudocode, not buildable source.
 * calls 00701710 FUN_00701710
 * calls 00708390 FUN_00708390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0070ab30(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint local_4;
  
  if ((((0 < *(short *)(DAT_00993cc8 + 0x148)) &&
       (local_4 = DAT_00925ae8 - *(int *)(DAT_00993cc8 + 0x21c),
       _DAT_00890d3c <= (float)(int)local_4 * _DAT_00890984)) &&
      (iVar1 = *(int *)(DAT_00993cc8 + 500), *(int *)(param_1 + 0x48) != iVar1)) &&
     (piVar3 = (int *)FUN_00708390(1,1), piVar3 != (int *)0x0)) {
    *(int *)(param_1 + 0x48) = iVar1;
    cVar2 = FUN_00701710(iVar1,&local_4);
    if (cVar2 != '\0') {
      (**(code **)(*piVar3 + 0x150))(local_4,(local_4 & *(uint *)(param_1 + 0x44)) != 0);
    }
  }
  return;
}

