/* speed.exe 008328cc FUN_008328cc; analysis pseudocode, not buildable source.
 */

undefined4 FUN_008328cc(int param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((((DAT_009c2c10 != 0) && (-1 < param_1)) &&
      (uVar1 = *(ushort *)(*(int *)(DAT_009c2c10 + 4 + param_1 * 8) + 10), uVar1 != 0xffff)) &&
     (param_2 < uVar1)) {
    uVar2 = 1;
  }
  return uVar2;
}

