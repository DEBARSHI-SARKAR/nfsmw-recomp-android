/* speed.exe 005b2ae0 FUN_005b2ae0; analysis pseudocode, not buildable source.
 * calls 005aef40 FUN_005aef40
 */

uint __thiscall FUN_005b2ae0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  uint in_EAX;
  undefined3 uVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return in_EAX & 0xffffff00;
    }
    if (((uint)puVar1[5] <= param_2) && (param_2 < (uint)*(ushort *)(puVar1 + 3) * 0x20 + puVar1[5])
       ) break;
    puVar1 = (undefined4 *)puVar1[1];
    in_EAX = param_2;
  }
  uVar2 = (ulonglong)(param_2 - puVar1[5]) / (ulonglong)*(ushort *)(puVar1 + 3);
  *(short *)((int)puVar1 + 0xe) = *(short *)((int)puVar1 + 0xe) + -1;
  uVar3 = (undefined3)(uVar2 >> 8);
  uVar4 = (uint)uVar2 >> 3;
  *(byte *)(uVar4 + 0x10 + (int)puVar1) =
       *(byte *)(uVar4 + 0x10 + (int)puVar1) & ~('\x01' << ((byte)uVar2 & 7));
  if (*(short *)((int)puVar1 + 0xe) == 0) {
    FUN_005aef40(puVar1);
    (**(code **)*puVar1)(1);
    uVar3 = extraout_var;
  }
  return CONCAT31(uVar3,1);
}

