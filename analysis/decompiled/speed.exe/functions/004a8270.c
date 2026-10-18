/* speed.exe 004a8270 FUN_004a8270; analysis pseudocode, not buildable source.
 * calls 0049e7a0 FUN_0049e7a0
 */

char __thiscall FUN_004a8270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 unaff_ESI;
  
  if (*(char *)(param_1 + 0x19) != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))
                      (param_2,*(undefined4 *)(param_1 + 0x14),param_4);
    if (cVar1 != '\0') {
      FUN_0049e7a0(*(undefined4 *)(param_1 + 0x14),unaff_ESI,*(undefined1 *)(param_1 + 0x18),param_4
                  );
    }
    return cVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x004a82b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  return cVar1;
}

