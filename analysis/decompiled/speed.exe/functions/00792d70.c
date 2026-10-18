/* speed.exe 00792d70 FUN_00792d70; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00835b40 FUN_00835b40
 * calls 00836260 FUN_00836260
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083a980 FUN_0083a980
 * calls 00836650 FUN_00836650
 */

char __thiscall FUN_00792d70(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_007ec1bd();
  piVar2 = param_1 + 0x4c;
  FUN_0083a980(piVar2,8,&PTR_LAB_008b6d2c,param_2 == '\x01');
  if (*param_1 != 0) {
    iVar1 = FUN_00835b40(*param_1);
    if (iVar1 == 3) goto LAB_00792dc7;
  }
  FUN_00836650(*param_1,3,0,0);
LAB_00792dc7:
  param_2 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)&param_2;
  }
  iVar1 = FUN_00836260(*param_1,3,piVar2,&DAT_0078b4d0,param_1);
  FUN_007ec1c8();
  return '\x01' - (iVar1 != 0);
}

