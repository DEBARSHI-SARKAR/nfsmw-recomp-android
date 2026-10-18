/* speed.exe 00824ed1 FUN_00824ed1; analysis pseudocode, not buildable source.
 * calls 00826710 FUN_00826710
 */

int FUN_00824ed1(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 8) != 0) &&
     (iVar1 = (*(code *)**(undefined4 **)(param_1 + 8))
                        (*(undefined4 **)(param_1 + 8),param_2,param_4,param_3,
                         *(undefined1 *)(param_1 + 0x1a)), iVar1 < 1)) {
    return iVar1;
  }
  FUN_00826710(param_1 + 0x1c,param_2,param_3,param_4);
  return param_2;
}

