/* speed.exe 00792ef0 FUN_00792ef0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00835b40 FUN_00835b40
 * calls 00836260 FUN_00836260
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls 00836650 FUN_00836650
 */

char __thiscall FUN_00792ef0(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_007ec1bd();
  piVar2 = param_1 + 0x51;
  FUN_0083c880(piVar2,0x30,&DAT_008b6d40,param_2);
  if (*param_1 != 0) {
    iVar1 = FUN_00835b40(*param_1);
    if (iVar1 == 5) goto LAB_00792f3f;
  }
  FUN_00836650(*param_1,5,0,0);
LAB_00792f3f:
  param_2 = param_2 & 0xffffff00;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)&param_2;
  }
  iVar1 = FUN_00836260(*param_1,5,piVar2,&DAT_0078b4d0,param_1);
  FUN_007ec1c8();
  return '\x01' - (iVar1 != 0);
}

