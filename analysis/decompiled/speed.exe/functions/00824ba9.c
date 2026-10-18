/* speed.exe 00824ba9 FUN_00824ba9; analysis pseudocode, not buildable source.
 * calls 00824b00 FUN_00824b00
 */

int FUN_00824ba9(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(int *)(param_1 + 8) == 0) ||
     (param_2 = (*(code *)**(undefined4 **)(param_1 + 8))
                          (*(undefined4 **)(param_1 + 8),param_2,param_4,param_3,
                           *(undefined1 *)(param_1 + 0x1a)), 0 < param_2)) {
    FUN_00824b00(param_1,param_2,param_3,param_4);
  }
  return param_2;
}

