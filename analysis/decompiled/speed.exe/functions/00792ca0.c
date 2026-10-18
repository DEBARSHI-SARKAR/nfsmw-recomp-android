/* speed.exe 00792ca0 FUN_00792ca0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00835b40 FUN_00835b40
 * calls 00836260 FUN_00836260
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls 0056e4d0 FUN_0056e4d0
 * calls 0083a980 FUN_0083a980
 * calls 00836650 FUN_00836650
 */

char __thiscall FUN_00792ca0(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  FUN_007ec1bd();
  piVar3 = param_1 + 0x34;
  FUN_0083c880(piVar3,0x60,&DAT_008b4cbc,param_2);
  FUN_0083c880(piVar3,0x60,&DAT_008b6d24,param_3);
  FUN_0083a980(piVar3,0x60,"MULTIPERS",1);
  uVar1 = FUN_0056e4d0();
  FUN_0083c880(piVar3,0x60,"REGKEY",uVar1);
  if (*param_1 != 0) {
    iVar2 = FUN_00835b40(*param_1);
    if (iVar2 == 2) goto LAB_00792d32;
  }
  FUN_00836650(*param_1,2,0,0);
LAB_00792d32:
  param_2 = param_2 & 0xffffff00;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)&param_2;
  }
  iVar2 = FUN_00836260(*param_1,2,piVar3,&LAB_0078b5e0,param_1);
  FUN_007ec1c8();
  return '\x01' - (iVar2 != 0);
}

