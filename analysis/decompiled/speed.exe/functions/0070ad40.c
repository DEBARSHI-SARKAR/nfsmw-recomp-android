/* speed.exe 0070ad40 FUN_0070ad40; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006fea20 FUN_006fea20
 */

void __fastcall FUN_0070ad40(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (DAT_0092d884 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)*DAT_0092d87c;
  }
  (**(code **)(*piVar3 + 4))();
  piVar1 = (int *)FUN_005d59f0(&LAB_004037e0);
  piVar3 = DAT_0092c67c;
  if ((((DAT_0092c67c != (int *)0x0) && (DAT_0090d5ec == 0)) && (piVar1 != (int *)0x0)) &&
     (*(int *)(param_1 + 0x194) != 0)) {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x100;
    puVar2 = (undefined4 *)FUN_006fea20();
    (**(code **)(*piVar1 + 0x58))(*puVar2);
    (**(code **)(*piVar3 + 0x2c))(0);
  }
  return;
}

