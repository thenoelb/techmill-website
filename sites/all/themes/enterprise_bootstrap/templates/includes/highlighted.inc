<?php if ($highlighted_placement && !$is_front): ?>
	<?php if (!empty($page['highlighted'])): ?>
		<div class="highlighted jumbotron">
			<?php print render($page['highlighted']); ?>
		</div>
	<?php endif; ?>
<?php elseif ($highlighted_placement && $is_front): ?>
	<?php if (!empty($page['highlighted'])): ?>
		<div class="highlighted container">
			<div class="jumbotron">
				<div class="highlighted-row <?php print $highlighted_row; ?>">
					<?php print render($page['highlighted']); ?>
				</div>
			</div>
		</div>
	<?php endif; ?>
<?php elseif (!$highlighted_placement && $highlighted_container && !$is_front): ?>
	<?php if (!empty($page['highlighted'])): ?>
		<div class="highlighted jumbotron container">
			<div class="highlighted-row row">
				<?php print render($page['highlighted']); ?>
			</div>
		</div>
	<?php endif; ?>
<?php else: ?>
	<?php if (!empty($page['highlighted'])): ?>
		<div class="highlighted jumbotron <?php print $highlighted_container; ?>">
			<?php print render($page['highlighted']); ?>
		</div>
	<?php endif; ?>
<?php endif; ?>