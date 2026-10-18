/* speed.exe 00754c30 FUN_00754c30; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005e8b20 FUN_005e8b20
 */

undefined4 __thiscall FUN_00754c30(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (((DAT_0091e000 != 0) && (DAT_0092d854 != 0)) &&
     (piVar5 = (int *)*DAT_0092d84c, piVar5 != (int *)0x0)) {
    while( true ) {
      piVar1 = (int *)FUN_005d59f0(&LAB_00402840);
      if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 8))(), param_1 == iVar2)) {
        iVar2 = (**(code **)(*piVar5 + 4))();
        *param_2 = iVar2;
        if (iVar2 != 0) {
          uVar4 = FUN_005e8b20();
          return uVar4;
        }
      }
      if (piVar5 == (int *)0xfffffff8) {
        piVar5 = (int *)0x0;
      }
      piVar1 = DAT_0092d84c + DAT_0092d854;
      piVar3 = DAT_0092d84c;
      if (DAT_0092d84c == piVar1) break;
      do {
        if ((int *)*piVar3 == piVar5) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar1);
      if (piVar3 == piVar1) {
        return 0;
      }
      if (piVar3 + 1 == piVar1) {
        return 0;
      }
      piVar5 = (int *)piVar3[1];
      if (piVar5 == (int *)0x0) {
        return 0;
      }
    }
  }
  return 0;
}

