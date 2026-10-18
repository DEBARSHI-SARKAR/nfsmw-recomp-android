/* speed.exe 00709f50 FUN_00709f50; analysis pseudocode, not buildable source.
 * calls 0041ad40 FUN_0041ad40
 * calls 00707bf0 FUN_00707bf0
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00709f50(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  
  FUN_00707bf0();
  if ((DAT_00993cc8 != 0) && (*(int *)(DAT_00993cc8 + 0x138) != 1)) {
    cVar1 = (**(code **)(*param_1 + 0x60))();
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x28))();
      FUN_0041ad40(uVar2);
      piVar3 = (int *)FUN_005d59f0(&LAB_00404060);
      if (piVar3 != (int *)0x0) {
        fVar4 = (float10)(**(code **)(*piVar3 + 0x34))();
        if (fVar4 < (float10)_DAT_00890dbc) {
          (**(code **)(*param_1 + 0x20c))();
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00709fb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}

