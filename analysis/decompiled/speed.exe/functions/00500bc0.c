/* speed.exe 00500bc0 FUN_00500bc0; analysis pseudocode, not buildable source.
 * calls 004fb210 FUN_004fb210
 */

int __thiscall FUN_00500bc0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0x18)) {
      return 0;
    }
    if (((*(char *)((int)puVar1 + 0xe) == '\0') && (puVar1[9] != 0)) &&
       (iVar2 = FUN_004fb210(param_2,puVar1[9],puVar1[10],0,0x18), iVar2 != 0)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return iVar2;
}

