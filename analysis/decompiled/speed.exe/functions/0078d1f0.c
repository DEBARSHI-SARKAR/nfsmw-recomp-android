/* speed.exe 0078d1f0 FUN_0078d1f0; analysis pseudocode, not buildable source.
 * calls 00842940 FUN_00842940
 * calls 00842a20 FUN_00842a20
 * calls 00460ca0 FUN_00460ca0
 */

bool __thiscall FUN_0078d1f0(int param_1,undefined4 *param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 4) != 0;
  if (bVar1) {
    FUN_00460ca0(param_1 + 0xc,*param_2,0x13);
    FUN_00460ca0(param_1 + 0x40,param_2[1],0x1f);
    FUN_00460ca0(param_1 + 0x60,param_2[2],0x1f);
    FUN_00460ca0(param_1 + 0x80,param_2[3],3);
    FUN_00460ca0(param_1 + 0x84,param_2[4],3);
    FUN_00460ca0(param_1 + 0x88,param_2[5],0x1f);
    FUN_00460ca0(param_1 + 0xa8,param_2[6],0x27);
    *(undefined1 *)(param_1 + 0x20) = 0;
    FUN_00842940(*(undefined4 *)(param_1 + 4),param_1 + 0xc);
    FUN_00842a20(*(undefined4 *)(param_1 + 4),param_2[7]);
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  return bVar1;
}

