/* speed.exe 007f7208 FUN_007f7208; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_007f7208(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x6c))();
  piVar1 = param_1 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (param_1 == DAT_009bdd58) {
      DAT_009bdd58 = (int *)0x0;
    }
    (**(code **)(*param_1 + 0x68))(1);
  }
  return param_1[6];
}

