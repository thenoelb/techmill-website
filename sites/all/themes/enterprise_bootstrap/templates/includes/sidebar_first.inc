<?php if (!empty($page['sidebar_first'])): ?>
	<aside class="<?php print $sidebar_column_class; ?>" role="complementary">
		<?php print render($page['sidebar_first']); ?>
	</aside>  <!-- /#sidebar-first -->
<?php endif; ?>