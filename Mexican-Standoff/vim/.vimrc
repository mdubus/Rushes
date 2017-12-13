set		autoindent
set		cindent
set		mouse=a
set		number

" La colonne de position du curseur est affichee
set		ruler
set		cursorcolumn

" 4 colonnes comptent pour une tabulation
set		tabstop=4

" Configuration du repertoire de backup
silent !mkdir -p ~/.vim/.backup
set backup
set backupdir=~/.vim/.backup//

" Autoclose des parentheses et des brackets
inoremap {			{}<Left>
inoremap {<CR>		{<CR>}<Esc>O
inoremap {}			{}

inoremap (			()<Left>
inoremap (<CR>		(<CR>)<Esc>O
inoremap ()			()

" Surligne en rouge quand il y a deux espaces a la suite
highlight	DoubleWhiteSpace ctermbg=red guibg=red
match		DoubleWhiteSpace /  /

" Surligne en bleu quand on depasse les 80 caaracteres
highlight MoreThan80 ctermbg=blue guibg=blue
:2match MoreThan80 /\%80v.\+/

" Surligne en jaune quand il y a un espace en trop en fin de ligne
autocmd InsertEnter * syn clear EOLWS | syn match EOLWS excludenl /\s\+\%#\@!$/
autocmd InsertLeave * syn clear EOLWS | syn match EOLWS excludenl /\s\+$/
highlight EOLWS ctermbg=yellow guibg=yellow


noremap <C-c><C-h> :call Header()<enter>

autocmd BufWritePre *.c :call Update()
autocmd BufNewFile *.c :call Header()

function! Update()
	if &modified
		return 0
	endif
	let date = strftime('%Y/%m/%d')
	let hour = strftime('%H:%M:%S')
	let updated = "/*   Updated: ".date." ".hour." by ".$USER
	let i = 17 - strwidth($USER)
	while i > 0
		let updated = updated . " "
		let i = i - 1
	endwhile
	let updated = updated . "###   ########.fr       */"
	call setline(9, updated)
endfunction

function! Header()

	let filename = "/*   ".expand('%:t')
	let i = 50 - strwidth(expand('%:t'))
	while i > 0
		let filename = filename . " "
		let i = i - 1
	endwhile
	let filename = filename . " :+:      :+:    :+:   */"

	if $MAIL
		let mail = $MAIL
	else
		let mail = "marvin@42.fr"
	endif

	let author = "/*   By: ".$USER." <".mail.">"
	let authorlength = strwidth($USER) + strwidth(mail)
	let i = 40 - authorlength
	while i > 0
		let author = author . " "
		let i = i - 1
	endwhile
	let author = author . "+#+  +:+       +#+        */"

	let date = strftime('%Y/%m/%d')
	let hour = strftime('%H:%M:%S')
	let i = 18 - strwidth($USER)
	let created = "/*   Created: ".date." ".hour." by ".$USER
	while i > 0
		let created = created . " "
		let i = i - 1
	endwhile
	let created = created . "#+#    #+#             */"

	let updated = "/*   Updated: ".date." ".hour." by ".$USER
	let i = 17 - strwidth($USER)
	while i > 0
		let updated = updated . " "
		let i = i - 1
	endwhile
	let updated = updated . "###   ########.fr       */"

	:normal gg
	call append(0, "/* ************************************************************************** */")
	call append(1, "/*                                                                            */")
	call append(2, "/*                                                        :::      ::::::::   */")
	call append(3, filename)
	call append(4, "/*                                                    +:+ +:+         +:+     */")
	call append(5, author)
	call append(6, "/*                                                +#+#+#+#+#+   +#+           */")
	call append(7, created)
	call append(8, updated)
	call append(9, "/*                                                                            */")
	call append(10, "/* ************************************************************************** */")
endfunction
