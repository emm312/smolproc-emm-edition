#subruledef reg
{
	r0 => 0x0
	r1 => 0x1
	r2 => 0x2
	r3 => 0x3
	A => 0x0
	B => 0x1
	C => 0x2
	D => 0x3
}

#ruledef
{	
	add {rd: reg}, {rs: reg} => 0b0000 @ rs`2 @ rd`2
	adc {rd: reg}, {rs: reg} => 0b0001 @ rs`2 @ rd`2
	sub {rd: reg}, {rs: reg} => 0b0010 @ rs`2 @ rd`2
	sbb {rd: reg}, {rs: reg} => 0b0011 @ rs`2 @ rd`2
	
	and {rd: reg}, {rs: reg} => 0b0100 @ rs`2 @ rd`2
	ior {rd: reg}, {rs: reg} => 0b0101 @ rs`2 @ rd`2
	nor {rd: reg}, {rs: reg} => 0b0110 @ rs`2 @ rd`2
	xor {rd: reg}, {rs: reg} => 0b0111 @ rs`2 @ rd`2
	
	mov {rd: reg}, {rs: reg} => 0b1000 @ rs`2 @ rd`2
	bnz {rd: reg}, {rs: reg}, {imm} => 0b1001 @ rs`2 @ rd`2 @ imm`8
	mst {rd: reg}, {rs: reg}, {imm} => 0b1010 @ rs`2 @ rd`2 @ imm`8
	mld {rd: reg}, {rs: reg}, {imm} => 0b1011 @ rs`2 @ rd`2 @ imm`8
	
	rsh {rd: reg} => 0b110000 @ rd`2
	rsc {rd: reg} => 0b110001 @ rd`2
	add {rd: reg}, {imm} => 0b110010 @ rd`2 @ imm`8
	and {rd: reg}, {imm} => 0b110011 @ rd`2 @ imm`8
	
	psh {rd: reg} => 0b110100 @ rd`2
	pop {rd: reg} => 0b110101 @ rd`2
	sld {rd: reg} => 0b110110 @ rd`2
	brc {imm} => 0b11011100 @ imm`8
	
	pst {rd: reg} => 0b111000 @ rd`2
	pld {rd: reg} => 0b111001 @ rd`2
	pld {imm} => 0b11101000 @ imm`8
	bnz {rd: reg}, {imm} => 0b111011 @ rd`2 @ imm`8
	
	mst {rd: reg}, {imm} => 0b111100 @ rd`2 @ imm`8
	mld {rd: reg}, {imm} => 0b111101 @ rd`2 @ imm`8
	rld {rd: reg}, {imm} => 0b111110 @ rd`2 @ imm`8
	hlt => 0b11111111
	
	swp {rd :reg}, {rs :reg} => 0b110100 @ rd`2 @ 0b1000 @ rs`2 @ rd`2 @ 0b110101 @ rs`2
	cal {rd: reg}, {imm} => 0b11101000 @ imm`8 @ 0b111000 @ rd`2
	lsh {rd: reg} => 0b0000 @ rd`2 @ rd`2
	lsc {rd: reg} => 0b0001 @ rd`2 @ rd`2
	nop => 0b10000000
}