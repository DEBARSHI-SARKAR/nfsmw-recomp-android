/* speed.exe 00792bf0 FUN_00792bf0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00835b40 FUN_00835b40
 * calls 00836260 FUN_00836260
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls 0083a980 FUN_0083a980
 * calls 00836650 FUN_00836650
 */

char __thiscall FUN_00792bf0(int *param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  FUN_007ec1bd();
  piVar2 = param_1 + 0x22;
  FUN_0083c880(piVar2,0x48,&DAT_008b4cbc,param_2);
  FUN_0083a980(piVar2,0x48,&DAT_008b6d08,param_3);
  FUN_0083a980(piVar2,0x48,&DAT_008b6d00,param_4);
  if (*param_1 != 0) {
    iVar1 = FUN_00835b40(*param_1);
    if (iVar1 == 1) goto LAB_00792c64;
  }
  FUN_00836650(*param_1,1,0,0);
LAB_00792c64:
  param_3 = param_3 & 0xff00;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)&param_3;
  }
  iVar1 = FUN_00836260(*param_1,1,piVar2,&DAT_0078b4d0,param_1);
  FUN_007ec1c8();
  return '\x01' - (iVar1 != 0);
}

