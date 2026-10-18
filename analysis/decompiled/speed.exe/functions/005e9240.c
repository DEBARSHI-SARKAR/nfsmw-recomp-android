/* speed.exe 005e9240 FUN_005e9240; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_005e9240(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*param_1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      piVar2 = (int *)FUN_005d59f0(&LAB_004040e0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x6c))(1);
      }
    }
  }
  return;
}

