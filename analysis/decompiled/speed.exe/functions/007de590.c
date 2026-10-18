/* speed.exe 007de590 __ShrMan; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __ShrMan
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int local_c;
  uint local_8;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar3 = (byte)param_2 & 0x1f;
  local_8 = 0;
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    uVar1 = *(uint *)(param_1 + local_c * 4);
    *(uint *)(param_1 + local_c * 4) = *(uint *)(param_1 + local_c * 4) >> bVar3;
    *(uint *)(param_1 + local_c * 4) = *(uint *)(param_1 + local_c * 4) | local_8;
    local_8 = (uVar1 & ~(-1 << bVar3)) << (0x20 - bVar3 & 0x1f);
  }
  for (local_c = 2; -1 < local_c; local_c = local_c + -1) {
    if (local_c < iVar2) {
      *(undefined4 *)(param_1 + local_c * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + local_c * 4) = *(undefined4 *)(param_1 + (local_c - iVar2) * 4);
    }
  }
  return;
}

