/* speed.exe 0047cdd0 FUN_0047cdd0; analysis pseudocode, not buildable source.
 * calls 0046f410 FUN_0046f410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047cdd0(int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  FUN_0046f410(param_2,*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x40));
  pfVar1 = param_2 + 1;
  FUN_0046f410(pfVar1,*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x44));
  pfVar2 = param_2 + 2;
  FUN_0046f410(pfVar2,*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x48));
  *param_2 = *param_2 * _DAT_00894d58;
  *pfVar1 = *pfVar1 * _DAT_00894d58;
  *pfVar2 = *pfVar2 * _DAT_00894d58;
  return;
}

