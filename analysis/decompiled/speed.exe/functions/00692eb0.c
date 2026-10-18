/* speed.exe 00692eb0 FUN_00692eb0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00692eb0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x78) + 4))();
  if ((cVar1 == '\0') && (*(int **)(param_1 + 0x110) != (int *)0x0)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x110) + 8))();
    return (float10)*(float *)(iVar2 + 0x14);
  }
  return (float10)_DAT_00890968;
}

