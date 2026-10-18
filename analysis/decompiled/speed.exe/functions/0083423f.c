/* speed.exe 0083423f FUN_0083423f; analysis pseudocode, not buildable source.
 * calls 00832fd4 FUN_00832fd4
 */

ushort FUN_0083423f(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  bool bVar6;
  
  uVar1 = 0;
  uVar5 = 1;
  uVar2 = FUN_00832fd4(param_1);
  iVar3 = 0;
  do {
    param_2 = param_2 + 1;
    uVar4 = uVar2 >> ((byte)iVar3 & 0x1f) & 3;
    if (uVar4 == 1) {
      bVar6 = *param_2 == 0;
LAB_00834274:
      if (!bVar6) {
        uVar1 = uVar1 | uVar5;
      }
    }
    else if (uVar4 == 2) {
      bVar6 = *param_2 == -1;
      goto LAB_00834274;
    }
    uVar5 = uVar5 << 1;
    iVar3 = iVar3 + 2;
    if (0x1f < iVar3) {
      return uVar1;
    }
  } while( true );
}

